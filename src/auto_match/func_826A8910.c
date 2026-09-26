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
extern int fn_82696480();
extern int fn_82696BC8();


undefined8 fn_826A8910(int param_1,undefined8 param_2,ulonglong param_3,int *param_4)

{
  bool bVar1;
  char cVar3;
  int iVar2;
  ulonglong uVar4;
  longlong lVar5;
  int *piVar6;
  int *piVar7;
  
  if ((param_3 & 0xffffffff) != 0) {
    if ((param_4 != (int *)0x0) && (uVar4 = (ulonglong)(uint)param_4[1] - 1, -1 < (longlong)uVar4))
    {
      lVar5 = (uVar4 & 0x1fffffff) << 3;
      do {
        piVar6 = (int *)((int)lVar5 + *param_4);
        iVar2 = *piVar6;
        if (piVar6[1] < 0) {
          if (iVar2 == 0) {
LAB_826a897c:
            piVar6 = (int *)0x0;
          }
          else {
            piVar6 = (int *)(iVar2 + 0x10);
          }
        }
        else {
          piVar6 = (int *)(iVar2 + 0x68);
          if (iVar2 == 0) goto LAB_826a897c;
        }
        if ((piVar6 != (int *)0x0) &&
           (cVar3 = (**(code **)(*piVar6 + 0x24))(piVar6,param_1 + 0x78,param_2,0), cVar3 != '\0'))
        {
          iVar2 = (**(code **)(*piVar6 + 8))(piVar6);
          if ((iVar2 < 2) || (bVar1 = true, 5 < iVar2)) {
            bVar1 = false;
          }
          if (!bVar1) {
            piVar6 = piVar6 + -4;
            goto LAB_826a8a4c;
          }
          piVar6 = piVar6 + -0x1a;
          goto LAB_826a8a40;
        }
        uVar4 = uVar4 - 1;
        lVar5 = lVar5 + -8;
      } while (-1 < (longlong)uVar4);
    }
    iVar2 = *(int *)(param_1 + 0x74);
    if (iVar2 != 0) {
      piVar7 = (int *)(param_1 + 0x78);
      cVar3 = (**(code **)(*(int *)(iVar2 + 0x68) + 0x24))(iVar2 + 0x68,piVar7,param_2,0);
      if (cVar3 == '\0') {
        piVar6 = *(int **)(*piVar7 + 0x2a0);
        if (piVar6 == (int *)0x0) {
          return 0;
        }
        cVar3 = (**(code **)(piVar6[4] + 0x24))(piVar6 + 4,piVar7,param_2,0);
        if (cVar3 == '\0') {
          return 0;
        }
LAB_826a8a4c:
        fn_82696BC8(param_3,piVar6);
      }
      else {
        piVar6 = *(int **)(param_1 + 0x74);
LAB_826a8a40:
        fn_82696480(param_3,piVar6);
      }
      return 1;
    }
  }
  return 0;
}

