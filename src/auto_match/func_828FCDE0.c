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
extern int fn_8265C940();
extern int fn_828FC3D0();
extern int fn_82F68CC0();


undefined8 fn_828FCDE0(int param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  char *pcVar6;
  
  uVar3 = fn_828FC3D0(param_2);
  pcVar6 = param_2;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  lVar4 = fn_8265C940((int)pcVar6 - (int)param_2,0x24810000);
  if (lVar4 != 0) {
    fn_82F68CC0(lVar4,param_2,(int)pcVar6 - (int)param_2);
    puVar5 = (undefined4 *)fn_8265C940(0x24,0x24810000);
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      uVar2 = *(undefined4 *)((int)((uVar3 & 0xffffffff) << 2) + param_1);
      puVar5[3] = 0;
      *puVar5 = (int)lVar4;
      puVar5[1] = param_3;
      puVar5[2] = param_4;
      puVar5[8] = uVar2;
    }
    if (puVar5 != (undefined4 *)0x0) {
      *(undefined4 **)((int)((uVar3 & 0xffffffff) << 2) + param_1) = puVar5;
      return 0;
    }
  }
  return 0xffffffff8007000e;
}

