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
extern unsigned int *auStack_3c;
extern unsigned int *auStack_5c;
extern int fn_82FF86A8();
extern int fn_82FF8938();
extern int fn_82FF8ED8();
extern int fn_830155E8();
extern int fn_830158F8();
extern unsigned int iStack_58;
extern unsigned int lbl_83264300;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_5e;
extern unsigned int uStack_5f;
extern unsigned int uStack_60;


undefined8 fn_82FF9638(longlong param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined1 uStack_60;
  undefined1 uStack_5f;
  ushort uStack_5e;
  ushort auStack_5c [2];
  int iStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 auStack_3c [60];
  
  uVar4 = 1;
  if (param_2 != 0) {
    param_1 = param_1 + 4;
    uVar4 = fn_82FF8938(param_1,&uStack_50,4);
    if (((int)uVar4 == 1) && (uVar2 = 0, uStack_50 != 0)) {
      do {
        uVar4 = fn_82FF8938(param_1,&uStack_54,4);
        if ((int)uVar4 != 1) {
          return uVar4;
        }
        uVar4 = fn_82FF8938(param_1,&uStack_4c,4);
        if ((int)uVar4 != 1) {
          return uVar4;
        }
        uVar4 = fn_82FF8938(param_1,&iStack_58,4);
        if ((int)uVar4 != 1) {
          return uVar4;
        }
        if ((iStack_58 != 0) && (uVar1 = fn_82FF8ED8(param_1), (uVar1 & 0xffffffff) != 0)) {
          uVar4 = fn_830158F8(lbl_83264300,uStack_54,uStack_4c,uVar1,iStack_58,1);
          fn_82FF86A8(param_1);
          if ((int)uVar4 != 1) {
            return uVar4;
          }
        }
        uVar4 = fn_82FF8938(param_1,auStack_5c,2);
        if ((int)uVar4 != 1) {
          return uVar4;
        }
        uVar3 = 0;
        if (auStack_5c[0] != 0) {
          do {
            fn_82FF8938(param_1,auStack_3c,4);
            fn_82FF8938(param_1,&uStack_5f,1);
            fn_82FF8938(param_1,&uStack_40,4);
            fn_82FF8938(param_1,&uStack_44,4);
            fn_82FF8938(param_1,&uStack_48,4);
            fn_82FF8938(param_1,&uStack_60,1);
            fn_82FF8938(param_1,&uStack_5e,2);
            uVar1 = fn_82FF8ED8(param_1,(ulonglong)uStack_5e * 0xc);
            if ((uVar1 & 0xffffffff) != 0) {
              uVar4 = fn_830155E8(lbl_83264300,uStack_54,uStack_40,uStack_44,uStack_48,
                                        uStack_60,uVar1,uStack_5e);
              fn_82FF86A8(param_1);
            }
            uVar3 = uVar3 + 1;
          } while (uVar3 < auStack_5c[0]);
          if ((int)uVar4 != 1) {
            return uVar4;
          }
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uStack_50);
    }
  }
  return uVar4;
}

