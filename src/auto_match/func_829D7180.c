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
extern unsigned int *auStack_830;
extern int fn_829D3F68();
extern int fn_829D4A28();


void fn_829D7180(uint param_1,uint *param_2,int param_3,int *param_4,longlong param_5)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  ulonglong uVar4;
  int iVar5;
  undefined1 auStack_830 [2096];
  
  iVar5 = 0;
  uVar2 = 0;
  iVar1 = 0;
  if (param_1 != 0) {
    do {
      iVar5 = iVar1;
      if (param_2[2] != 0xffffffff) {
        uVar4 = 0;
        if (*param_2 != 0) {
          puVar3 = (uint *)(iVar5 * 4 + param_3 + -4);
          do {
            fn_829D3F68(uVar4,param_2,auStack_830);
            fn_829D4A28(param_5 + 0xf4a18,auStack_830);
            uVar4 = uVar4 + 1;
            puVar3 = puVar3 + 1;
            *puVar3 = uVar2;
            iVar5 = iVar5 + 1;
          } while ((uVar4 & 0xffffffff) < (ulonglong)*param_2);
        }
      }
      uVar2 = uVar2 + 1;
      param_2 = param_2 + 6;
      iVar1 = iVar5;
    } while (uVar2 < param_1);
  }
  *param_4 = iVar5;
  return;
}

