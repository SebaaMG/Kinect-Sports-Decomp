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
extern int fn_82887D30();
extern int fn_8289F160();
extern unsigned int lbl_83212A04;
extern unsigned int uStack_30;


int * fn_82882E60(undefined4 *param_1,int *param_2)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  undefined4 uStack_30;
  int aiStack_2c [11];
  
  uStack_30 = *param_1;
  fn_8289F160(aiStack_2c,0xffffffff83212a00,&uStack_30);
  if (aiStack_2c[0] == lbl_83212A04) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(aiStack_2c[0] + 0x10);
  }
  for (; (param_2 != (int *)0x0 && (*(char *)(param_2 + 9) != '\0')); param_2 = (int *)param_2[0xc])
  {
    uVar1 = *(undefined2 *)((int)param_2 + 0x26);
    uVar3 = (**(code **)(*param_2 + 4))(param_2);
    cVar4 = fn_82887D30(*(undefined4 *)(iVar5 + 0xb4),uVar3,uVar1);
    if (cVar4 != '\0') {
      return param_2;
    }
    puVar2 = (undefined4 *)param_1[3];
    param_2[3] = (int)puVar2;
    *puVar2 = param_2 + 2;
    param_1[3] = param_2 + 2;
    param_2[2] = (int)(param_1 + 2);
  }
  return param_2;
}

