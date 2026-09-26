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
extern unsigned int *auStack_40;
extern int fn_822315A0();
extern int fn_822C72E0();
extern int fn_822CEA78();
extern int fn_822D5D20();
extern int fn_82365BD8();
extern int fn_8288B760();


undefined8 fn_822CEB28(int param_1,int *param_2,undefined4 *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar3;
  undefined8 uVar2;
  char cVar4;
  undefined4 *puVar5;
  undefined1 auStack_40 [64];
  
  puVar5 = param_3;
  if (0xf < (uint)param_3[5]) {
    puVar5 = (undefined4 *)*param_3;
  }
  iVar3 = fn_822C72E0(*(undefined4 *)(*(int *)(param_1 + 0x114) + 0x20),puVar5);
  if (iVar3 == 0) {
    if (param_2[1] != 0) {
      fn_822315A0();
    }
    uVar2 = 0;
  }
  else {
    uVar2 = fn_82365BD8(auStack_40,param_2);
    fn_822CEA78(param_1,uVar2,param_3,param_4);
    iVar3 = *(int *)(param_1 + 0x168);
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c0) + 0x84);
    if (((iVar3 != 0) && (cVar4 = fn_8288B760(iVar3), cVar4 != '\0')) && (iVar1 != 0)) {
      fn_822D5D20(iVar3,*(undefined4 *)(*param_2 + 0x217c),param_3);
    }
    if (param_2[1] != 0) {
      fn_822315A0();
    }
    uVar2 = 1;
  }
  return uVar2;
}

