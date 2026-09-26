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
extern int fn_82CE5410();
extern int fn_82CEA160();
extern int fn_82CEA220();
extern int fn_82CEAC20();


void fn_82E0F198(int *param_1,int param_2,longlong param_3,int *param_4,int param_5)

{
  int iVar3;
  undefined8 uVar1;
  ulonglong uVar2;
  int iVar4;
  int *piVar5;
  
  if (0 < (int)param_3) {
    piVar5 = (int *)(param_2 + 4);
    do {
      if ((*piVar5 != 0) && (iVar3 = fn_82CEA220(param_5), *(int *)(param_5 + 8) < iVar3)) {
        iVar3 = *param_4;
        uVar1 = fn_82CEAC20(*piVar5);
        uVar2 = (**(code **)(iVar3 + 0x10))(param_4,uVar1);
        if ((uVar2 & 0xffffffff) == 0) {
          (**(code **)(*param_1 + 0x18))(param_1,*piVar5,0,0);
        }
        else {
          iVar3 = *piVar5;
          iVar4 = fn_82CE5410();
          fn_82CEA160(param_5,*(undefined4 *)(iVar4 + 0x10),uVar2,iVar3);
          (**(code **)(*param_1 + 0x18))(param_1,*piVar5,uVar2,0xffffffff8323ae68);
          (**(code **)(*param_1 + 0x20))(param_1,uVar2);
        }
      }
      param_3 = param_3 + -1;
      piVar5 = piVar5 + 2;
    } while (param_3 != 0);
  }
  return;
}

