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
extern int fn_8267C8D8();
extern int fn_8267CF60();
extern int fn_8267D9C0();
extern int fn_826933E8();


undefined8 fn_8267E408(int param_1,int param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  
  if (*(int *)(param_1 + 0x10) < param_2) {
    return 0;
  }
  iVar4 = param_1 + 0x18;
  fn_8267C8D8(iVar4);
  if (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0x14) + param_2) {
    if ((param_3 & 0xffffffff) != 0) {
      if ((int)param_3 == -1) {
        if (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0x14) + param_2) {
          do {
            fn_8267CF60(param_1 + 0x2c,iVar4,0xffffffffffffffff);
          } while (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0x14) + param_2);
        }
        goto LAB_8267e458;
      }
      uVar1 = fn_826933E8();
      uVar2 = param_3;
      while (cVar3 = fn_8267CF60(param_1 + 0x2c,iVar4,uVar2), cVar3 != '\0') {
        if (*(int *)(param_1 + 0x14) + param_2 <= *(int *)(param_1 + 0x10)) goto LAB_8267e458;
        uVar2 = fn_826933E8();
        uVar2 = (uVar2 & 0xffffffff) - (uVar1 & 0xffffffff);
        if ((param_3 & 0xffffffff) <= (uVar2 & 0xffffffff)) break;
        uVar2 = param_3 - uVar2;
      }
    }
    uVar5 = 0;
  }
  else {
LAB_8267e458:
    uVar5 = 1;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + param_2;
  }
  fn_8267D9C0(iVar4);
  return uVar5;
}

