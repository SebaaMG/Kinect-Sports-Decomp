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
extern int fn_8267C498();
extern int fn_826944C8();
extern int fn_82695370();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82696D38();
extern int fn_82697610();
extern int fn_826A7398();
extern int fn_826A98D8();
extern int fn_826F6FA8();
extern int fn_827035B0();


void fn_8271A2A8(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  bool bVar3;
  char *pcVar6;
  undefined8 uVar4;
  int iVar7;
  undefined8 uVar5;
  longlong lVar8;
  int aiStack_30 [12];
  
  puVar1 = *(undefined1 **)(param_1 + 4);
  fn_826959C8(puVar1);
  puVar1[4] = 0;
  *puVar1 = 2;
  if (*(int *)(param_1 + 0x1c) < 1) {
    return;
  }
  pcVar6 = (char *)fn_826957D0(param_1,0);
  if (*pcVar6 == '\a') {
    uVar2 = *(undefined4 *)(param_1 + 0x18);
    uVar4 = fn_826957D0(param_1,0);
    iVar7 = fn_82695370(uVar4,uVar2);
  }
  else {
    pcVar6 = (char *)fn_826957D0(param_1,0);
    if ((*pcVar6 == '\x03') || (bVar3 = false, *pcVar6 == '\x04')) {
      bVar3 = true;
    }
    uVar2 = *(undefined4 *)(param_1 + 0x18);
    if (!bVar3) {
      uVar4 = fn_826957D0(param_1,0);
      fn_82696D38(aiStack_30,uVar4,uVar2,0xffffffffffffffff,0);
      iVar7 = fn_826A98D8(*(undefined4 *)(param_1 + 0x18),aiStack_30,0);
      if (iVar7 != 0) {
        *(int *)(iVar7 + 4) = *(int *)(iVar7 + 4) + 1;
      }
      lVar8 = (ulonglong)*(uint *)(aiStack_30[0] + 8) - 1;
      *(int *)(aiStack_30[0] + 8) = (int)lVar8;
      if (lVar8 == 0) {
        fn_826944C8(aiStack_30[0]);
      }
      goto LAB_8271a3e4;
    }
    uVar4 = fn_826957D0(param_1,0);
    uVar4 = fn_82697610(uVar4,uVar2);
    uVar5 = fn_826A7398(*(undefined4 *)(param_1 + 0x18));
    iVar7 = fn_826F6FA8(uVar5,uVar4);
  }
  if (iVar7 != 0) {
    *(int *)(iVar7 + 4) = *(int *)(iVar7 + 4) + 1;
  }
LAB_8271a3e4:
  if (iVar7 != 0) {
    uVar4 = fn_826A7398(*(undefined4 *)(param_1 + 0x18));
    fn_827035B0(uVar4,iVar7,0xffffffff82196582,0,0);
    puVar1 = *(undefined1 **)(param_1 + 4);
    fn_826959C8(puVar1);
    *puVar1 = 2;
    puVar1[4] = 1;
    fn_8267C498(iVar7);
  }
  return;
}

