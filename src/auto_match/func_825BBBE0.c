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
extern int fn_8255BFC0();
extern unsigned int lbl_831C119C;


undefined8 fn_825BBBE0(int param_1,int param_2)

{
  undefined2 *puVar1;
  code *pcVar2;
  int iVar4;
  char cVar5;
  undefined8 uVar3;
  undefined2 *puVar6;
  
  puVar6 = *(undefined2 **)(*(int *)(param_2 + 0x34) + 4);
  puVar1 = *(undefined2 **)(*(int *)(param_2 + 0x34) + 8);
  while( true ) {
    if (puVar1 <= puVar6) {
      return 0xffffffffffffffff;
    }
    iVar4 = fn_8255BFC0(*(undefined4 *)(param_1 + 0x2fc),*puVar6);
    if (*(code **)(&lbl_831C119C + (uint)*(ushort *)(iVar4 + 4) * 0x10) == (code *)0x0) {
      cVar5 = '\0';
    }
    else {
      cVar5 = (**(code **)(&lbl_831C119C + (uint)*(ushort *)(iVar4 + 4) * 0x10))(iVar4,param_1);
    }
    if (cVar5 != '\0') break;
    puVar6 = puVar6 + 1;
  }
  pcVar2 = *(code **)((uint)*(ushort *)(iVar4 + 4) * 0x10 + -0x7ce3ee5c);
  if (pcVar2 != (code *)0x0) {
    uVar3 = (*pcVar2)(iVar4);
    return uVar3;
  }
  return 0xffffffffffffffff;
}

