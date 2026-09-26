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
extern unsigned int fStack_4c;
extern unsigned int fStack_50;
extern int fn_8268D008();
extern int fn_826C98F8();
extern int fn_827A1070();
extern unsigned int iStack_2c;
extern unsigned int iStack_30;
extern unsigned int iStack_34;
extern unsigned int iStack_38;
extern unsigned int iStack_3c;
extern unsigned int iStack_40;


int * fn_8272C748(int *param_1,undefined8 param_2,char param_3,int *param_4)

{
  ushort uVar1;
  char cVar3;
  int iVar2;
  float fStack_50;
  float fStack_4c;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  if (((((uint)param_1[0x23] >> 0xb & 1) == 0) &&
      (cVar3 = (**(code **)(*param_1 + 8))(), cVar3 != '\0')) && (param_4 != param_1)) {
    iStack_40 = param_1[0x11];
    iStack_3c = param_1[0x12];
    iStack_38 = param_1[0x13];
    iStack_34 = param_1[0x14];
    iStack_30 = param_1[0x15];
    iStack_2c = param_1[0x16];
    fn_8268D008(&iStack_40,&fStack_50,param_2);
    if ((*(short *)(param_1 + 0x19) == 0) &&
       (cVar3 = (**(code **)(*param_1 + 0x30))(param_1,&fStack_50,1), cVar3 != '\0')) {
      if (param_3 != '\0') {
        return param_1;
      }
      iVar2 = *(int *)(param_1[0x28] + 0x114);
      if (iVar2 == 0) {
        uVar1 = *(ushort *)(param_1[0x27] + 0x50) >> 5;
      }
      else {
        uVar1 = *(ushort *)(iVar2 + 0x68) >> 1;
      }
      if ((uVar1 & 1) != 0) {
        return param_1;
      }
      if (iVar2 == 0) {
        uVar1 = *(ushort *)(param_1[0x27] + 0x50) >> 5;
      }
      else {
        uVar1 = *(ushort *)(iVar2 + 0x68) >> 1;
      }
      if ((((uVar1 & 1) == 0) && ((*(ushort *)(param_1 + 0x32) >> 1 & 1) != 0)) &&
         (((*(byte *)(*(int *)(param_1[0x28] + 8) + 0x20) & 1) != 0 &&
          (cVar3 = fn_827A1070((double)fStack_50,(double)fStack_4c), cVar3 != '\0')))) {
        return param_1;
      }
      while ((param_1 = (int *)param_1[8], param_1 != (int *)0x0 &&
             (iVar2 = (**(code **)(param_1[0x1a] + 8))(param_1 + 0x1a), iVar2 == 2))) {
        cVar3 = fn_826C98F8(param_1);
        if (cVar3 != '\0') {
          if (param_4 == (int *)0x0) {
            return param_1;
          }
          if (param_1 != param_4) {
            return param_1;
          }
        }
      }
    }
  }
  return (int *)0x0;
}

