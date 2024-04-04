#include <stdio.h>

typedef struct control_message
{
    int opcode;
    int statuscode;
} cm;

typedef union Packet
{
    cm controlmsg;
    char data_payload[100];
} packet;

typedef struct DataPacket
{
    int flag;
    packet p1;
} datapacket;

int main()
{
    datapacket d1[10];
    for (int i = 0; i < 1; i++)
    {
        printf("Enter choice :\n");
        printf("1.Control Message\n2.data_payload\n");
        scanf("%d", &d1[i].flag);
        switch (d1[i].flag)
        {
        case 1:
            printf("Enter the opcode :");
            scanf("%d", &d1[i].p1.controlmsg.opcode);
            printf("Enter the statuscode :");
            scanf("%d", &d1[i].p1.controlmsg.statuscode);
            printf("opcode : %d\n", d1[i].p1.controlmsg.opcode);
            printf("Status code : %d\n", d1[i].p1.controlmsg.statuscode);
            break;
        case 2:
            printf("Enter the data_payload :");
            fflush(stdin);
            gets(d1[i].p1.data_payload);
            printf("data_payload : ");
            puts(d1[i].p1.data_payload);
            break;

        default:
            printf("Invalid choice.\n");
            break;
        }
    }

    return 0;
}