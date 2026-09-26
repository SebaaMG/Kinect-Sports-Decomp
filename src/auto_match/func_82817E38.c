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


undefined8 fn_82817E38(uint *param_1,int param_2,int param_3,int *param_4)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if (((param_1 != (uint *)0x0) && (param_2 != 0)) && (param_4 != (int *)0x0)) {
    iVar4 = 0;
    uVar2 = 0;
    if (*param_1 != 0) {
      iVar3 = 0;
      do {
        if (*(int *)(iVar3 + param_1[1] + 8) == param_2) {
          if (iVar4 == param_3) {
            iVar4 = uVar2 * 0xc + param_1[1];
            uVar1 = 1;
            goto code_r0x82817ea0;
          }
          iVar4 = iVar4 + 1;
        }
        uVar2 = uVar2 + 1;
        iVar3 = iVar3 + 0xc;
      } while (uVar2 < *param_1);
    }
  }
  iVar4 = 0;
  uVar1 = 0;
code_r0x82817ea0:
  *param_4 = iVar4;
  return uVar1;
}

