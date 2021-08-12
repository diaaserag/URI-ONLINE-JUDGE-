//  main.cpp
//  answer 1049 - Animal uri online judge
//  solved by diaa serag
// Try hard before using other programmers' codes

#include<iostream>
#include<string>
using namespace std;
string resalt(string,string,string);
int main()
{
    string a,b,c;
    cout<<resalt(a,b,c)<<"\n";
}
string resalt(string s1,string s2,string s3)
{
    cin>>s1>>s2>>s3;
    if(s1=="vertebrado"&&s2=="ave"&&s3=="carnivoro")
    return "aguia";
    else if(s1=="vertebrado"&&s2=="ave"&&s3=="onivoro")
    return "pomba";
    else if(s1=="vertebrado"&&s2=="mamifero"&&s3=="onivoro")
    return "homem";
    else if(s1=="vertebrado"&&s2=="mamifero"&&s3=="herbivoro")
    return "vaca";
    else if(s1=="invertebrado"&&s2=="inseto"&&s3=="herbivoro")
    return "lagarta";
    else if(s1=="invertebrado"&&s2=="inseto"&&s3=="hematofago")
    return "pulga";
    else if(s1=="invertebrado"&&s2=="anelideo"&&s3=="hematofago")
    return "sanguessuga";
    else if(s1=="invertebrado"&&s2=="anelideo"&&s3=="onivoro")
    return "minhoca";
}
