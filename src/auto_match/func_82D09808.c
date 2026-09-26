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
extern int fn_82CE52E0();
extern int fn_82CE5338();
extern int fn_82CE5410();
extern int fn_82D09618();


undefined8 fn_82D09808(undefined8 param_1,undefined8 param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  
  iVar3 = param_3[1];
  iVar2 = fn_82CE5410();
  iVar2 = fn_82CE52E0(*(undefined4 *)(iVar2 + 0x10),iVar3 << 4);
  uVar1 = param_3[2];
  iVar3 = param_3[1];
  iVar4 = 0;
  if (0 < iVar3) {
    iVar6 = 0;
    puVar5 = (undefined4 *)(iVar2 + -8);
    do {
      iVar4 = iVar4 + 1;
      puVar5[2] = *(undefined4 *)(iVar6 + *param_3);
      puVar5[3] = *(undefined4 *)(iVar6 + *param_3 + 4);
      iVar3 = iVar6 + *param_3;
      iVar6 = (((int)uVar1 >> 2) + (uint)((int)uVar1 < 0 && (uVar1 & 3) != 0)) * 4 + iVar6;
      puVar5 = puVar5 + 4;
      *puVar5 = *(undefined4 *)(iVar3 + 8);
      iVar3 = param_3[1];
    } while (iVar4 < iVar3);
  }
  fn_82D09618(param_1,param_2,iVar2,iVar3,0);
  iVar3 = fn_82CE5410();
  fn_82CE5338(*(undefined4 *)(iVar3 + 0x10),iVar2);
  return param_2;
}

