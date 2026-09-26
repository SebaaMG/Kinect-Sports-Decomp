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
extern unsigned int *auStack_5c;
extern int fn_82820EF8();
extern int fn_82826AB0();
extern int fn_8282D0E0();
extern unsigned int iStack00000014;
extern unsigned int iStack_60;
extern unsigned int stack0x00000014;


void fn_82826F80(int param_1,int param_2,int param_3,undefined4 *param_4,undefined4 *param_5)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iStack00000014;
  int iStack_60;
  undefined1 auStack_5c [92];
  
  iVar7 = 0;
  *param_4 = 0;
  *param_5 = 0;
  iStack_60 = 0;
  iVar4 = -1;
  iVar5 = 0;
  iStack00000014 = param_1;
  if ((*(byte *)(param_1 + 0x134) & 8) == 0) {
    fn_8282D0E0(*(undefined4 *)(param_1 + 0xcc),4,&stack0x00000014);
  }
  if (*(int *)(iStack00000014 + 0x38) != 0) {
    uVar3 = 0;
    iVar6 = -0xc;
    iVar2 = iStack00000014;
    do {
      if (iVar5 == 0) {
        iVar6 = iVar6 + 0xc;
        puVar1 = (undefined4 *)(*(int *)(iVar2 + 0xfc) + iVar6);
        iVar4 = iVar4 + 1;
        iVar5 = puVar1[2];
        fn_82826AB0(iVar2,*puVar1,&iStack_60,auStack_5c);
        iVar2 = iStack00000014;
      }
      iVar5 = iVar5 + -1;
      if ((param_2 == *(int *)(iVar7 + *(int *)(iVar2 + 0x100))) &&
         (param_3 == *(int *)(iVar6 + *(int *)(iVar2 + 0xfc)))) {
        *param_5 = *(undefined4 *)(iVar4 * 0xc + *(int *)(iVar2 + 0xfc) + 4);
        *param_4 = *(undefined4 *)(*(int *)(uVar3 * 4 + *(int *)(iVar2 + 0x100)) + iStack_60);
        fn_82820EF8(param_4,4);
        return;
      }
      uVar3 = uVar3 + 1;
      iVar7 = iVar7 + 4;
    } while (uVar3 < *(uint *)(iVar2 + 0x38));
  }
  return;
}

