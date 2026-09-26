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
extern int fn_82246A40();
extern int fn_822471C8();
extern int fn_824C04E0();
extern int fn_8289AB78();
extern int fn_828AD740();


void fn_824C3F18(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  char cVar6;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 4);
  if (*(int *)(iVar1 + 0x5c) != 0) {
    *(undefined4 *)(*(int *)(iVar1 + 0x48) + 0x4c) = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x40c)
    ;
  }
  iVar2 = *(int *)(iVar1 + 0x48);
  if ((iVar2 == 0) || (bVar4 = true, *(uint *)(*(int *)(iVar2 + 8) + 0x204) < 2)) {
    bVar4 = false;
  }
  if (bVar4) {
    if (*(int *)(iVar1 + 0x5c) != 0) {
      cVar6 = fn_828AD740(*(undefined4 *)(iVar2 + 8));
      if (cVar6 != '\0') {
        cVar6 = fn_82246A40(*(undefined4 *)(iVar1 + 0x48));
        if (cVar6 != '\0') {
          piVar3 = *(int **)(*(int *)(iVar1 + 0x48) + 0x38);
          if (piVar3 != (int *)0x0) {
            lVar5 = (**(code **)(*piVar3 + 8))();
            cVar6 = fn_8289AB78(lVar5 + 0xf0);
            if (cVar6 != '\0') {
              fn_822471C8(*(undefined4 *)(*(int *)(iVar1 + 0x48) + 0x38),1);
            }
          }
        }
      }
    }
  }
  else {
    *(undefined4 *)(iVar1 + 0x44) = 6;
    fn_824C04E0(iVar1,1);
  }
  return;
}

