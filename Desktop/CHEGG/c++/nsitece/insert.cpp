#include <iostream>
#include<string>
#include<windows.h>
#include<mysql.h>

using namespace std;

int main()
{
    MYSQL* conn;
    MYSQL_ROW row;
    MYSQL_RES* res;
    int qstate;
    conn=mysql_init(0);
    if(conn)
    cout << "connection object is ok :" <<conn<< endl;
    else
    cout<<"something wrong"<< mysql_error(conn)<<endl;

    conn=mysql_real_connect(conn,"localhost","root","","nsitece",0,NULL,0);

    if(conn){
         cout << "connection to database done!! :" <<conn<< endl;
         string Student_id,Name,Roll_no;
         cout<<"Enter student id :"<<endl;cin>>Student_id;
         cout<<"Enter name "<<endl; cin>>Name;
         cout<<"Enter Roll No: "<<endl; cin>>Roll_no;

         string query="insert into student(Student_id,Name,Roll_no) values(""+Student_id+"",""+Name+"",""+Roll_no+"")";

         const char* q = query.c_str();
         cout<<"query is: "<<q<<endl;
         qstate=mysql_query(conn,q);
         if(!qstate)
            cout<<"record inserted successfully.."<<endl;
         else
            cout<<"query problem: "<<mysql_error(conn)<<endl;
    }

    else
    cout<<"something wrong"<< mysql_error(conn)<<endl;

    qstate=mysql_query(conn,"select * from Student");
    if(!qstate)
    {
        res=mysql_store_result(conn);
        while(row=mysql_fetch_row(res))
        {
            cout<<"Student id :"<<row[0]<<" "<<endl;
            cout<<"Student Name :"<<row[1]<<" "<<endl;
            cout<<"Student Roll NO :"<<row[2]<<" "<<endl;

        }
    }
    else{
        cout<<"Query Execution problem! "<<mysql_error(conn)<<endl;
    }
    return 0;
}

