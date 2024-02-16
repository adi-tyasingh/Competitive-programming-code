#include<stdio.h>
#include<stdlib.h>
void main(){
int i, j, num[10],divs[10],quo [10], rem[10], temp, num2[10],rem2[10];
printf("Enter you mgs(6bit): ");
for( i=0; i<6;i++){
scanf("%d", &num[i]);
num2[i]=num[i];}
printf("\nEnter you divisor(4bit): ");
for(i=0; i<4;i++){
scanf("%d",&divs[i]);}
for(i=6 ;i<9;i++){
num[i]=0;}
for( i=0;i<6;i++)
{
temp=i;
if(num[i]==0){
quo[i]=0;}
else
{
quo[i]=1;
for( j=0;j<=4;j++)
{
if(num[temp]==divs[j]){
num[temp]=0;
rem[j]=0;}
else{
num[temp]=1;
rem[j]=1;
}
temp = temp + 1;}}}
printf("\n quotient =") ;
for(int i=0;i<6;i++)
{
printf("%d",quo[i]);}
printf("\n remainder =");
for(int i=1;i<4;i++){
printf("%d",rem[i]);}
num2[6]=rem[1];
num2[7]=rem[2];
num2[8]=rem[3];
for(int i=0;i<6;i++){
temp=i;
if(num2[i]==0){
quo[i]=0;}
else{
quo[i]=1;
for(int j=0;j<=4;j++){
if(num2[temp]==divs[j]){
num2[temp]=0;
rem2[j]=0;}
else{
num2[temp]=1;
rem2[j]=1;}
temp = temp + 1;}}}
printf("\nNew remainder to check mgs = ");
for(int i=1;i<4;i++){
printf("%d", rem2[i]);}}
