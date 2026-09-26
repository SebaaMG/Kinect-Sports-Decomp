typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
extern int fn_82A1E968();
extern int fn_82F6B030();
extern unsigned int lbl_8218E8FC;
extern unsigned int lbl_821955AC;
extern unsigned int lbl_8326F968;
extern unsigned int lbl_8326F96C;
extern unsigned int lbl_832767D8;
extern unsigned int lbl_832767E0;
extern unsigned int lbl_8327F880;
extern unsigned int lbl_8327F888;
extern unsigned int lbl_8327F890;
extern unsigned int lbl_8327F894;
extern unsigned int lbl_8327F898;
extern unsigned int lbl_8327F89C;


void fn_82540108(void)

{
  byte bVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  longlong alStack_30 [3];
  
  if ((lbl_8326F968 == 0) || (bVar1 = 1, lbl_8326F96C != 0)) {
    bVar1 = 0;
  }
  alStack_30[0] = (longlong)(int)((-(uint)bVar1 & 0xfffffff6) + 0x3c);
  dVar4 = (double)(lbl_8218E8FC / (float)alStack_30[0]);
  fn_82A1E968(alStack_30);
  lVar2 = (alStack_30[0] - lbl_832767D8) - lbl_8327F888;
  lbl_8327F888 = alStack_30[0] - lbl_832767D8;
  dVar3 = (double)fn_82F6B030(lVar2);
  lbl_8327F890 = lbl_8327F894;
  lbl_8327F880 = (float)(dVar3 / (double)lbl_832767E0);
  if ((double)lbl_8327F880 <= dVar4) {
    dVar3 = (double)lbl_8327F880 * (double)lbl_821955AC + (double)lbl_8327F89C;
    lbl_8327F894 = lbl_8327F880;
  }
  else {
    dVar3 = dVar4 * (double)lbl_821955AC + (double)lbl_8327F89C;
    lbl_8327F894 = (float)dVar4;
  }
  lbl_8327F898 = (int)dVar3;
  lbl_8327F89C = (float)dVar3 - (float)(longlong)(int)dVar3;
  return;
}

