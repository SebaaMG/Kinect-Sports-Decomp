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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern unsigned int *auStack_48;
extern int fn_82B465E0();
extern int fn_82B48C48();
extern int fn_82B48CF0();
extern int fn_82B494C8();
extern int fn_82B496A0();
extern int fn_82B49D90();
extern int fn_82B4BAA8();
extern int fn_82B4D688();
extern int fn_82B4D758();
extern int fn_82B4D828();
extern int fn_82B866A0();
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82015468;
extern unsigned int lbl_8201DFE8;
extern unsigned int lbl_82022E60;
extern unsigned int lbl_820288D0;
extern unsigned int lbl_8202DAB8;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


undefined8 fn_82B4F870(undefined8 param_1,undefined4 *param_2,int param_3)

{
  char cVar3;
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar4;
  undefined4 uStack_50;
  uint uStack_4c;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [56];
  
  cVar3 = fn_82B465E0(param_1,param_2,&uStack_50);
  if (((cVar3 == '\0') || ((double)CONCAT44(uStack_50,uStack_4c) < lbl_8202DAB8)) ||
     (lbl_820288D0 < (double)CONCAT44(uStack_50,uStack_4c))) {
    dVar4 = (double)lbl_821AAD20;
    fn_82B866A0((double)lbl_8201DFE8,dVar4,dVar4,dVar4,&uStack_50,param_1,1);
    fn_82B866A0((double)lbl_82002C5C,dVar4,dVar4,dVar4,auStack_48,param_1,1);
    fn_82B866A0((double)lbl_82015468,dVar4,dVar4,dVar4,auStack_40,param_1,1);
    fn_82B866A0((double)lbl_82022E60,dVar4,dVar4,dVar4,auStack_38,param_1,1);
    uVar1 = fn_82B4D828(param_1,param_2,&uStack_50);
    uVar1 = fn_82B4D688(param_1,uVar1,auStack_48);
    uVar1 = fn_82B494C8(param_1,uVar1);
    uVar1 = fn_82B4D758(param_1,uVar1,auStack_40);
    uStack_50 = fn_82B4D688(param_1,uVar1,auStack_38);
    param_2 = &uStack_50;
    uStack_4c = uStack_4c & 0x10000 | 1;
  }
  uVar1 = fn_82B4BAA8(param_1,param_2);
  if (param_3 == 0xb) {
    uVar2 = fn_82B48CF0();
  }
  else {
    uVar2 = fn_82B48C48(param_1,uVar1);
    if (param_3 == 0x4a) {
      uVar1 = fn_82B48CF0(param_1,uVar1);
      uVar1 = fn_82B496A0(param_1,uVar1);
      uVar2 = fn_82B49D90(param_1,uVar2,uVar1);
    }
  }
  return uVar2;
}

