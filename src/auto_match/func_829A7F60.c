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
extern int fn_8295D1C8();


undefined8 fn_829A7F60(int param_1,ulonglong param_2,ulonglong param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  
  uVar4 = fn_8295D1C8(param_1,param_2 | param_3);
  if (-1 < (int)uVar4) {
    if ((((param_2 | param_3) & 0x2000) != 0) && (0x1ff < *(ushort *)(param_1 + 0xca))) {
      if ((*(uint *)(*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x14) + param_4 * 4) + 4) * 4 +
                             *(int *)(param_1 + 0x10)) + 4) & 0x10) == 0) {
        iVar2 = *(int *)(*(int *)(param_1 + 0x14) + param_4 * 4);
        uVar1 = *(uint *)(iVar2 + 0x10);
        uVar3 = (ulonglong)*(uint *)(iVar2 + 0xc) & 0x7ff;
        uVar5 = uVar3 | 0xb0000000;
        if (uVar1 != 0) {
          if (uVar1 == 1) {
            uVar5 = uVar3 | 0xb0550000;
          }
          else if (uVar1 < 3) {
            uVar5 = uVar3 | 0xb0aa0000;
          }
          else if (uVar1 == 3) {
            uVar5 = uVar3 | 0xb0ff0000;
          }
        }
      }
      else {
        uVar5 = 0xfffffffff0e40800;
      }
      fn_8295D1C8(param_1,uVar5);
    }
    uVar4 = 0;
  }
  return uVar4;
}

