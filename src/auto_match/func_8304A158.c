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
extern unsigned int *auStack_58;
extern int fn_83048F80();
extern int fn_83049D68();
extern int fn_8307DD98();
extern int fn_8307E570();
extern int fn_8307E600();
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


char fn_8304A158(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  int *piVar7;
  int *piVar8;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined4 auStack_58;
  
  cVar6 = '\x01';
  piVar8 = (int *)(param_1 + 0x60);
  lVar5 = 2;
  do {
    if (*piVar8 == 0) {
LAB_8304a1d0:
      uStack_60 = 0;
      piVar7 = piVar8 + 1;
      iVar2 = (**(code **)(**(int **)(param_1 + 0x2c) + 0x2c))
                        (*(int **)(param_1 + 0x2c),piVar7,&uStack_60,0);
      if (((iVar2 != 0x11) && (iVar2 != 0x2e)) && (iVar2 != 0x2d)) {
        cVar6 = '\x02';
      }
      if ((ulonglong)uStack_60 != 0) {
        *piVar8 = *piVar7 + *(int *)(param_1 + 0x30);
        lVar4 = (ulonglong)uStack_60 - (ulonglong)*(uint *)(param_1 + 0x30);
        *(undefined4 *)(param_1 + 0x30) = 0;
        iVar2 = *piVar8;
        uStack_60 = (uint)lVar4;
        if (*(int *)(param_1 + 0x44) == 0) {
          fn_83049D68(param_1,lVar4,iVar2);
          iVar2 = fn_8307E600(*(undefined4 *)(param_1 + 0x28),0,iVar2,lVar4);
          cVar6 = (iVar2 != 0) + '\x01';
        }
        else {
          iVar3 = fn_83048F80(iVar2,lVar4,(undefined4 *)(param_1 + 0x44),&auStack_58,&uStack_5c
                                   );
          uVar1 = uStack_60;
          if (iVar3 == 1) {
            fn_83049D68(param_1,uStack_60,iVar2);
            iVar2 = fn_8307E600(*(undefined4 *)(param_1 + 0x28),0,iVar2,uVar1);
            cVar6 = (iVar2 != 0) + '\x01';
            if (cVar6 == '\x01') {
              fn_8307E570(*(undefined4 *)(param_1 + 0x28),0,auStack_58,uStack_5c);
              *(undefined4 *)(param_1 + 0x44) = 0;
            }
          }
          else {
            fn_83049D68(param_1,uStack_60,iVar2);
            if (*piVar7 != 0) {
              (**(code **)(**(int **)(param_1 + 0x2c) + 0x30))();
              *piVar7 = 0;
            }
            *piVar8 = 0;
          }
        }
      }
    }
    else {
      iVar2 = fn_8307DD98(*(undefined4 *)(param_1 + 0x28),0);
      if (iVar2 == 0) {
        if (piVar8[1] != 0) {
          (**(code **)(**(int **)(param_1 + 0x2c) + 0x30))();
          piVar8[1] = 0;
        }
        *piVar8 = 0;
        goto LAB_8304a1d0;
      }
      if (*piVar8 == 0) goto LAB_8304a1d0;
    }
    lVar5 = lVar5 + -1;
    piVar8 = piVar8 + 2;
    if (lVar5 == 0) {
      return cVar6;
    }
  } while( true );
}

