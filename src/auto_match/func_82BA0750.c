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
extern int fn_82AB15D0();
extern int fn_82BAF540();
extern int fn_82BC0A80();
extern int fn_82BC24B0();
extern int fn_82BC2EF0();
extern int fn_82BC3428();


void fn_82BA0750(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar4;
  longlong lVar3;
  char cVar5;
  int iVar6;
  int *piVar7;
  
  iVar1 = *(int *)(param_1 + 0x88);
  iVar4 = *(int *)(iVar1 + 8);
  do {
    if (iVar4 == 0) {
      return;
    }
    for (piVar2 = *(int **)(iVar1 + 0x1c); piVar2[2] != 0; piVar2 = (int *)piVar2[2]) {
      if ((piVar2[0x39] & 1U) != 0) {
        iVar6 = 1;
        iVar4 = (**(code **)(*piVar2 + 4))(piVar2);
        if (0 < iVar4) {
          piVar7 = piVar2 + 0x15;
          do {
            iVar4 = *piVar7;
            if ((((iVar4 == 0x23) || (iVar4 == 0x24)) || (iVar4 == 0x25)) || (iVar4 == 0x26)) {
              lVar3 = fn_82BAF540(*(undefined4 *)(param_1 + 0xac),0x1f,1);
              if (lVar3 == 0) {
                fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820decc4,0xffffffff820deb50,0x132);
              }
              fn_82BC3428(piVar2,lVar3);
              break;
            }
            iVar6 = iVar6 + 1;
            piVar7 = piVar7 + 1;
            iVar4 = (**(code **)(*piVar2 + 4))(piVar2);
          } while (iVar6 <= iVar4);
        }
        if (((((uint)piVar2[0x39] >> 1 & 1) != 0) &&
            (iVar4 = fn_82BC2EF0(piVar2[0x14],*(undefined4 *)(param_1 + 0xc)), iVar4 == 8)) &&
           (lVar3 = fn_82BAF540(*(undefined4 *)(param_1 + 0xac),0x1f,2), lVar3 != 0)) {
          fn_82BC3428(piVar2);
        }
        if (((piVar2[4] != 0) && (cVar5 = fn_82BC24B0(piVar2), cVar5 != '\0')) &&
           (piVar2[0x14] != 0x2a)) {
          iVar4 = piVar2[7];
          fn_82BC3428(piVar2,iVar4);
          fn_82BC0A80(iVar4,piVar2[5],piVar2);
        }
      }
    }
    iVar1 = *(int *)(iVar1 + 8);
    iVar4 = *(int *)(iVar1 + 8);
  } while( true );
}

