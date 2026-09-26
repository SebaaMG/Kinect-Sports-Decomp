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
extern int fn_82698C48();
extern int fn_82F68CC0();


void fn_82699580(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  char cVar5;
  int aiStack_30 [12];
  
  iVar1 = param_2[0x10];
  uVar2 = param_1[1];
  aiStack_30[0] = iVar1;
  uVar4 = fn_82698C48(param_1,0,uVar2,aiStack_30,0xffffffff82698c28);
  if (uVar4 < uVar2) {
    piVar3 = *(int **)(uVar4 * 4 + *param_1);
    if (piVar3[5] == iVar1) {
      *(byte *)((int)piVar3 + 0x66) = *(byte *)((int)piVar3 + 0x66) & 0xbf;
      cVar5 = (**(code **)(*piVar3 + 0x10))(piVar3);
      if (cVar5 != '\0') {
        if ((*(byte *)((int)param_2 + 0x4b) & 8) != 0) {
          fn_82F68CC0(piVar3 + 9,param_2 + 1,0x20);
          (**(code **)(*piVar3 + 4))(piVar3);
        }
        if ((*(byte *)((int)param_2 + 0x4b) & 4) != 0) {
          piVar3[0x11] = param_2[9];
          piVar3[0x12] = param_2[10];
          piVar3[0x13] = param_2[0xb];
          piVar3[0x14] = param_2[0xc];
          piVar3[0x15] = param_2[0xd];
          piVar3[0x16] = param_2[0xe];
        }
        if ((*(byte *)((int)param_2 + 0x4b) & 0x80) != 0) {
          (**(code **)(*piVar3 + 0x18))(piVar3,*(undefined1 *)((int)param_2 + 0x4a));
        }
        if (*param_2 != 0) {
          (**(code **)(*piVar3 + 0x1c))(piVar3);
        }
        piVar3[7] = param_2[0xf];
      }
    }
  }
  return;
}

