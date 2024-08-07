

#ifndef __ISO15765_4_H
#define __ISO15765_4_H

#define DSTotal15765  151


typedef enum {iso15765 = 0, iso14230,iso9141} ISOTypeDef;

void ISO15765_4Setting(CANCPTabTypeDef *CANCMD,u8 speed,u8 CANStype);
ERRORType SetDTCRAM(__IO u8 *cmd,u8 *dtcram);
ERRORType OneDTCNum(__IO u8 *cmd,u8 *ram);
void SetDTCTab(u8 *dtcram,u8 p,ISOTypeDef sw);
ERRORType SetDSRAM(__IO u8 *cmd,const DSControlTypeDef *Controltab,__IO u8 *p,FlagStatus FS);
u16 GetDSNumber(__IO u8 *cmd,ERRORType *err,u8 n);
ERRORType CheckASCII(__IO u8 *p,u8 n,u8 *ram);
void SetISO15765CmdTabRam(u8 *dtcram,u8 p);
/****************************���㹫ʽ����******************************/
float gzmsl(float data);
u32 gzdzt(char *data,u8 *p,ERRORType *err);
u32 zcshjc(char *data,u8 *p,ERRORType *err);
u32 zcryjc(char *data,u8 *p,ERRORType *err);
u32 zcbjjc(char *data,u8 *p,ERRORType *err);
u32 shjcjx(char *data,u8 *p,ERRORType *err);
u32 ryjcjx(char *data,u8 *p,ERRORType *err);
u32 bjjcjx(char *data,u8 *p,ERRORType *err);
u32 zczyjc(char *data,u8 *p,ERRORType *err);
u32 zcfqjc(char *data,u8 *p,ERRORType *err);
u32 zcpmjc(char *data,u8 *p,ERRORType *err);
u32 zcegjc(char *data,u8 *p,ERRORType *err);
u32 nmhcjx(char *data,u8 *p,ERRORType *err);
u32 dyhcjx(char *data,u8 *p,ERRORType *err);
u32 zyyljx(char *data,u8 *p,ERRORType *err);
u32 zcegjx(char *data,u8 *p,ERRORType *err);
u32 swpcbu(char *data,u8 *p,ERRORType *err);
u32 ryxizt(char *data,u8 *p,ERRORType *err);
float fhjsz(float data);
float flqwd(float data);
float dqryxz(float data);
float ygyl(float data);
float fdjzs(float data);
float qgjdyl(float data);
float qgdhtqj(float data);
float zlkqll(float data);
float ycgqdy(float data);
float fdjqdsj(float data);
float qgzkyl(float data);
float ygyl1(float data);
float dlb(float data);
float ryzqyl(float data);
float ycgqdl(float data);
float chjwd(float data);
float ycgqdy1(float data);
float kzmkdy(float data);
float jdfhz(float data);
float yyzqyl(float data);
float zqpfxtyl(float data);
float pyzs(float data);
float fdjgyl(float data);
float clpfyq(float data);
u32 zleckqps(char *data,u8 *p,ERRORType *err);
u32 ycgqwz(char *data,u8 *p,ERRORType *err);
u32 ycgq1(char *data,u8 *p,ERRORType *err);
u32 ptozt(char *data,u8 *p,ERRORType *err);
u32 rllx(char *data,u8 *p,ERRORType *err);
u32 obdqq(char *data,u8 *p,ERRORType *err);
float fdjqdsj1(float data);
/**********************************************************************/
typedef struct
{
    __IO u8 A;
    __IO u8 B;
} ABdef;


extern u8 DTCRAM[21];
extern u8 DSRAM[2];
extern u8 SpeedCount;
extern u8 VINRAM[20];
extern u8 CIDRAM1[20];
extern u8 CIDRAM2[20];
extern u8 CVNRAM1[10];
extern u8 CVNRAM2[10];
extern u8 ECUNAMERAM[15];
extern const DSControlTypeDef  DSControl15765[DSTotal15765];
extern __IO u16 Count;
extern __IO u8 DSOLDNUM;
#endif











