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
extern unsigned int *auStack_34;
extern unsigned int *auStack_40;
extern int fn_82A1DDC0();
extern int fn_8300F150();
extern int fn_8300F208();
extern unsigned int lbl_832642E4;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_3e;


undefined8 fn_82FE6BC0(undefined4 param_1,int *param_2,ulonglong param_3)

{
  undefined2 uVar2;
  undefined8 uVar1;
  int *piVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int *piVar6;
  undefined1 auStack_40 [2];
  undefined2 uStack_3e;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 auStack_34 [36];
  
  if (4 < (param_3 & 0xffffffff)) {
    return 0x1f;
  }
  if ((param_3 & 0xffffffff) != 0) {
    uVar5 = 0;
    piVar3 = param_2;
    if (param_3 - 1 != 0) {
      do {
        uVar5 = uVar5 + 1;
        if ((uVar5 & 0xffffffff) < (param_3 & 0xffffffff)) {
          uVar4 = uVar5;
          piVar6 = piVar3;
          do {
            piVar6 = piVar6 + 2;
            if (*piVar3 == *piVar6) {
              return 0x1f;
            }
            uVar4 = uVar4 + 1;
          } while ((uVar4 & 0xffffffff) < (param_3 & 0xffffffff));
        }
        piVar3 = piVar3 + 2;
      } while ((uVar5 & 0xffffffff) < (param_3 - 1 & 0xffffffff));
    }
  }
  uStack_38 = (undefined4)param_3;
  uStack_3e = 0xd;
  uStack_3c = param_1;
  fn_82A1DDC0(auStack_34,param_2,(param_3 & 0x1fffffff) << 3);
  uVar2 = fn_8300F150();
  uVar1 = fn_8300F208(lbl_832642E4,auStack_40,uVar2);
  return uVar1;
}

