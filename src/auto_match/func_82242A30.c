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
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern int fn_822315A0();
extern int fn_82243DA8();
extern int fn_8288B760();
extern int fn_828AC428();
extern int fn_828AC488();
extern unsigned int uStack_68;


void fn_82242A30(int param_1)

{
  int iVar1;
  undefined8 *puVar2;
  char cVar4;
  longlong lVar3;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  undefined1 auStack_60 [72];
  
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  iVar1 = *(int *)(param_1 + 8);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  if (iVar1 != 0) {
    fn_822315A0();
  }
  iVar1 = *(int *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (iVar1 != 0) {
    fn_822315A0();
  }
  if ((*(int *)(param_1 + 0x1c) != 0) && (cVar4 = fn_8288B760(), cVar4 != '\0')) {
    lVar3 = (**(code **)(**(int **)(param_1 + 0x1c) + 8))();
    lVar6 = 7;
    puVar2 = &uStack_68;
    do {
      puVar5 = puVar2;
      puVar2 = puVar5 + 1;
      *puVar2 = 0;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    *(undefined4 *)(puVar5 + 2) = 0;
    fn_828AC428(auStack_80);
    fn_82243DA8(lVar3 + 0x48,auStack_60,auStack_80,0);
    fn_828AC488(auStack_80);
  }
  return;
}

