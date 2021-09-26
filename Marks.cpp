#inclue<iostream.h>
void main()
/* if marks are greater than 80%, eligible for science stream; greater than 65%, eligible for commerce; greaater than 50%, eligible for arts */
int marks;
cin>>marks;
{
if(marks>80)
cout<<"eligible for science stream"<<endl;
else
if(marks>60)
cout<<"eligible for commerce"<<endl;
else
if(marks>50)
cout<<"eligible for humanities"<<endl;
else
cout<<not eligible"<<endl;
}
