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
extern int fn_8225F160();
extern int fn_8247E4D8();
extern int fn_824C04E0();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_828AD740();


void fn_824C3E18(int param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar7;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 4);
  iVar5 = *(int *)(iVar6 + 0x48);
  if ((iVar5 == 0) || (bVar2 = true, *(uint *)(*(int *)(iVar5 + 8) + 0x204) < 2)) {
    bVar2 = false;
  }
  if (bVar2) {
    cVar7 = fn_828AD740(*(undefined4 *)(iVar5 + 8));
    if (cVar7 == '\0') {
      piVar1 = *(int **)(*(int *)(iVar6 + 0x48) + 0x38);
      if (piVar1 != (int *)0x0) {
        lVar3 = fn_8265C9E0(0x428);
        if (lVar3 == 0) {
          iVar5 = 0;
        }
        else {
          lVar4 = (**(code **)(*piVar1 + 8))(piVar1);
          iVar5 = fn_8247E4D8(lVar3,lVar4 + 0xf0);
        }
        if (iVar5 != *(int *)(iVar6 + 0x5c)) {
          if (*(int *)(iVar6 + 0x5c) != 0) {
            fn_8265CA20();
          }
          *(int *)(iVar6 + 0x5c) = iVar5;
        }
      }
    }
    if (*(int *)(iVar6 + 0x5c) != 0) {
      *(undefined4 *)(*(int *)(iVar6 + 0x48) + 0x4c) =
           *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0x40c);
    }
    iVar6 = fn_8225F160();
    if (iVar6 != 0) {
      *(undefined4 *)(iVar6 + 100) = 2;
    }
  }
  else {
    *(undefined4 *)(iVar6 + 0x44) = 6;
    fn_824C04E0(iVar6,1);
  }
  return;
}

