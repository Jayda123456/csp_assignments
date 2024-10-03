
int hour;

int main(){
    time_t now ;
    struct tm*now_tm;
     
    now = time(NULL);
    now_tm = localtime(&now);
    hour = now_tm->tm_hour;
    printf("%d\n" , hour);

    if (hour <= 12){
        printf("")
    }
}