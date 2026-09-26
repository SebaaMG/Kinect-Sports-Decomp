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
extern unsigned int *auStack_38;
extern int fn_825089A0();
extern int fn_8287DAF8();
extern int fn_8287FD98();
extern int fn_82885338();
extern int fn_828872C8();
extern int fn_828EA790();
extern unsigned int iStack_40;
extern unsigned int *lbl_83212A04;


void fn_82885698(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar6;
  longlong lVar4;
  undefined8 uVar5;
  int iStack_40;
  int *piStack_3c;
  undefined1 auStack_38 [56];
  
  piStack_3c = (int *)*lbl_83212A04;
  if (piStack_3c != lbl_83212A04) {
    do {
      piVar6 = piStack_3c;
      fn_82885338(piStack_3c[3]);
      iVar1 = piVar6[4];
      piVar6 = (int *)fn_825089A0();
      lVar4 = (**(code **)(*piVar6 + 0xc))();
      iStack_40 = **(int **)(iVar1 + 0x8c);
      if ((int *)iStack_40 != *(int **)(iVar1 + 0x8c)) {
        do {
          iVar3 = iStack_40;
          puVar2 = *(undefined4 **)(iStack_40 + 0x10);
          if ((ulonglong)(lVar4 - *(longlong *)(puVar2 + 0x10)) < 0x7d1) {
            fn_828EA790(&iStack_40);
          }
          else {
            uVar5 = fn_8287FD98();
            fn_8287DAF8(uVar5,puVar2);
            (**(code **)*puVar2)(puVar2,1);
            iStack_40 = fn_828872C8(auStack_38,iVar1 + 0x88,iVar3);
            iStack_40 = *(int *)iStack_40;
          }
        } while (iStack_40 != *(int *)(iVar1 + 0x8c));
      }
      fn_828EA790(&piStack_3c);
    } while (piStack_3c != lbl_83212A04);
  }
  return;
}

