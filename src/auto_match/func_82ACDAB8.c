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
extern int fn_82ACB180();
extern int fn_82ACB8B8();
extern int fn_82ACBA08();
extern int fn_82AD6090();
extern unsigned int iStack_48;
extern unsigned int uStack_4c;


void fn_82ACDAB8(int param_1,uint *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char cVar6;
  int iVar5;
  bool bVar7;
  uint *puStack_50;
  uint uStack_4c;
  int iStack_48;
  
  cVar6 = fn_82ACB8B8(param_2,param_3);
  if (cVar6 != '\0') {
    return;
  }
  iVar5 = *(int *)(param_1 + 0x2d8);
  iStack_48 = 0;
  iVar4 = (*(uint *)(param_3 + 0x10) >> 0x14 & 0x780 | *(uint *)(param_3 + 0x14) >> 0x19) * 4;
  uStack_4c = -(uint)((param_2[1] & 1) == 0) & param_2[1];
  iVar1 = *(int *)(iVar5 + iVar4 + -4);
  puStack_50 = param_2;
  while( true ) {
    if ((uStack_4c == 0) || (bVar7 = false, iStack_48 == *(int *)(uStack_4c + 8))) {
      bVar7 = true;
    }
    if (bVar7) break;
    iVar2 = *(int *)((iStack_48 + 4) * 4 + uStack_4c);
    iVar2 = (*(uint *)(iVar2 + 0x10) >> 0x14 & 0x780 | *(uint *)(iVar2 + 0x14) >> 0x19) * 4;
    if ((*(uint *)(*(int *)(param_1 + 0x2d4) + iVar4 + -4) <
         *(uint *)(*(int *)(param_1 + 0x2d4) + iVar2 + -4)) ||
       ((iVar2 = *(int *)(iVar2 + iVar5 + -4), iVar1 <= iVar2 && (iVar1 < iVar2)))) {
      fn_82ACBA08(&puStack_50,param_3);
      return;
    }
    fn_82ACB180(&puStack_50);
  }
  if ((param_2[1] & 1) == 0) {
    uVar3 = *param_2 & 0xfffffffe;
    iVar5 = uVar3 - 4;
    if ((iVar5 != 0) && (*(int *)(uVar3 + 4) + 1U <= *(uint *)(uVar3 + 8))) goto LAB_82acdc04;
  }
  iVar5 = fn_82AD6090(param_2,1);
LAB_82acdc04:
  iVar1 = *(int *)(iVar5 + 8);
  *(int *)(iVar5 + 8) = iVar1 + 1;
  *(int *)((iVar1 + 4) * 4 + iVar5) = param_3;
  return;
}

