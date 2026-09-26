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


longlong fn_825BBCA0(int param_1,int param_2)

{
  undefined2 *puVar1;
  code *pcVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  undefined2 *puVar6;
  
  lVar5 = 1;
  puVar6 = *(undefined2 **)(*(int *)(param_2 + 0x34) + 4);
  puVar1 = *(undefined2 **)(*(int *)(param_2 + 0x34) + 8);
  do {
    if (puVar1 <= puVar6) {
      return lVar5;
    }
    iVar3 = fn_8255BFC0(*(undefined4 *)(param_1 + 0x2fc),*puVar6);
    if (*(code **)(&lbl_831C119C + (uint)*(ushort *)(iVar3 + 4) * 0x10) == (code *)0x0) {
      cVar4 = '\0';
    }
    else {
      cVar4 = (**(code **)(&lbl_831C119C + (uint)*(ushort *)(iVar3 + 4) * 0x10))(iVar3,param_1);
    }
    if (cVar4 != '\0') {
      if (lVar5 != 0) {
        pcVar2 = *(code **)((uint)*(ushort *)(iVar3 + 4) * 0x10 + -0x7ce3ee60);
        if (pcVar2 == (code *)0x0) {
          cVar4 = '\0';
        }
        else {
          cVar4 = (*pcVar2)(iVar3,param_1);
        }
        lVar5 = 1;
        if (cVar4 != '\0') goto LAB_825bbd60;
      }
      lVar5 = 0;
    }
LAB_825bbd60:
    puVar6 = puVar6 + 1;
  } while( true );
}

