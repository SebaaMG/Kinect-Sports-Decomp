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
extern int fn_82975B00();
extern int fn_82F66AE0();
extern int fn_82F6DF30();


undefined8 fn_8294B688(int param_1,char *param_2,int *param_3,char param_4,int param_5)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  
  *param_3 = 0;
  cVar3 = *param_2;
  while( true ) {
    if (cVar3 == '\0') {
      return 0xffffffff80004005;
    }
    while (iVar2 = fn_82F66AE0(cVar3), iVar2 == 0) {
      param_2 = param_2 + 1;
      cVar3 = *param_2;
    }
    cVar3 = fn_82F6DF30(*param_2);
    if (cVar3 == param_4) break;
    cVar3 = *param_2;
    while (iVar2 = fn_82F66AE0(cVar3), iVar2 != 0) {
      param_2 = param_2 + 1;
      cVar3 = *param_2;
    }
    cVar3 = *param_2;
  }
  if (*param_3 == 0) {
    *param_3 = (int)param_2;
    return 0;
  }
  iVar2 = 0;
  uVar5 = 0;
  if (*(uint *)(param_1 + 8) != 0) {
    iVar6 = 0;
    do {
      iVar1 = *(int *)(iVar6 + *(int *)(param_1 + 0x14));
      if (*(int *)(iVar1 + 4) == param_5) {
        iVar2 = iVar1;
      }
      uVar5 = uVar5 + 1;
      iVar6 = iVar6 + 4;
    } while (uVar5 < *(uint *)(param_1 + 8));
    if (iVar2 != 0) {
      uVar4 = *(undefined4 *)(iVar2 + 0x60);
      goto LAB_8294b780;
    }
  }
  uVar4 = 0;
LAB_8294b780:
  fn_82975B00(param_1,uVar4,0x119d,0xffffffff820377a8);
  return 0xffffffff80004005;
}

