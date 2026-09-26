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
extern unsigned int *auStack_3c;
extern int fn_828A6F90();


void fn_828A7138(undefined4 *param_1,char param_2,undefined4 *param_3,char param_4)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piStack_40;
  undefined1 auStack_3c [60];
  
  piStack_40 = (int *)*param_3;
  if (piStack_40 != (int *)**(undefined4 **)*param_1) {
    do {
      piVar5 = piStack_40;
      piVar2 = (int *)piStack_40[2];
      (**(code **)(*piVar2 + 8))(piVar2);
      if (param_2 != '\0') {
        iVar3 = piVar5[2];
        for (iVar7 = *(int *)(iVar3 + 0x10); iVar7 != *(int *)(iVar3 + 0x14); iVar7 = iVar7 + 8) {
          if ((*(int *)(iVar7 + 4) == 0) || (*(int *)(*(int *)(iVar7 + 4) + 4) == 0)) {
            bVar4 = true;
            goto LAB_828a71cc;
          }
        }
        bVar4 = false;
LAB_828a71cc:
        if (bVar4) {
          *(undefined1 *)(iVar3 + 4) = 0;
        }
      }
      cVar1 = *(char *)(piVar5[2] + 4);
      (**(code **)(*piVar2 + 0xc))(piVar2);
      if (cVar1 == '\0') {
        puVar6 = (undefined4 *)
                 fn_828A6F90(auStack_3c,*(undefined4 *)*param_1,(ulonglong)(uint)piVar5[2] + 100,
                               &piStack_40);
        piStack_40 = (int *)*puVar6;
      }
      else {
        piStack_40 = (int *)*piVar5;
        if (param_4 != '\0') break;
      }
    } while (piStack_40 != (int *)**(undefined4 **)*param_1);
  }
  param_1[2] = piStack_40;
  return;
}

