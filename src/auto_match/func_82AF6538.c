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
extern int fn_82ABE250();
extern int fn_82AF5350();
extern int fn_82AF53F0();


void fn_82AF6538(undefined8 param_1,uint *param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  
  param_2[2] = param_2[2] | 0x4000;
  *param_2 = *param_2 & 0xe0001fff | (*param_2 & 0xffffe000) + param_4 * 0x2000 & 0x1fffe000;
  piVar1 = *(int **)(param_3 + 0x20);
  if ((piVar1 != (int *)0x0) && (piVar1[1] == 0)) {
    iVar2 = *piVar1;
    if ((*(uint *)(iVar2 + 8) & 0x2000) != 0) {
      uVar3 = fn_82AF5350(param_1,param_2,iVar2);
      fn_82AF53F0(param_1,param_2);
      if ((uVar3 & 0xff) == 0) {
        puVar4 = (undefined4 *)fn_82ABE250(param_1,8,0x31);
        *puVar4 = param_2;
        puVar4[1] = *(undefined4 *)(iVar2 + 0x14);
        *(undefined4 **)(iVar2 + 0x14) = puVar4;
      }
    }
  }
  return;
}

