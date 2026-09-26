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
extern int fn_82CEE7F8();
extern int fn_82CEEA70();
extern int fn_82CEEB70();
extern int fn_82CEEE70();
extern int fn_82CFD5A8();
extern int fn_82CFFA08();


void fn_82CEEF50(uint *param_1,int param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = (int)param_3;
  if (0 < iVar3) {
    switch(*(undefined1 *)((int)param_1 + 0xd)) {
    case 0x14:
      uVar2 = fn_82CFD5A8(param_1);
      if (((uVar2 & 0xffffffff) != 0) && (0 < iVar3)) {
        puVar4 = (undefined4 *)(param_2 + -4);
        do {
          uVar1 = fn_82CEEB70(puVar4[1],uVar2);
          if ((uVar1 & 0xffffffff) == 0) {
            uVar1 = (ulonglong)*param_1;
          }
          puVar4 = puVar4 + 1;
          fn_82CEE7F8(uVar1,*puVar4,uVar2,param_4);
          param_3 = param_3 + -1;
        } while (param_3 != 0);
        return;
      }
      break;
    case 0x19:
      uVar2 = fn_82CFD5A8(param_1);
      if ((uVar2 & 0xffffffff) != 0) {
        fn_82CEEE70(*param_1,uVar2,param_2,param_3,param_4);
        return;
      }
      break;
    case 0x1d:
      if (0 < iVar3) {
        puVar4 = (undefined4 *)(param_2 + -4);
        do {
          puVar4 = puVar4 + 1;
          fn_82CEEA70(param_1,*puVar4,param_4);
          param_3 = param_3 + -1;
        } while (param_3 != 0);
        return;
      }
      break;
    case 0x21:
      if (0 < iVar3) {
        do {
          fn_82CFFA08(param_4,*param_1,param_2);
          param_3 = param_3 + -1;
          param_2 = param_2 + 4;
        } while (param_3 != 0);
      }
    }
  }
  return;
}

