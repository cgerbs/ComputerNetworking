#define PBADCKSUM 5 


typedef struct {
  int seq_ack;
  int len;
  int cksum;
}Header;

//dont think order of stucts matters
typedef struct {
  Header header;
  char data[10];
}Packet;

int getChecksum(Packet packet);
void logPacket(Packet packet);