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
extern int fn_825298E8();
extern int fn_8252AE68();
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_825293A8(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if ((param_1[0x13] == 0) && (param_1[0xc] != 0)) {
    fn_825298E8();
  }
  else {
    piVar2 = param_1 + 0xe;
    if (param_1[0xe] == 0) {
      if ((param_1[0x13] != 0) && (*(char *)(param_1 + 0x2c9) == '\0')) {
        uStack_30 = 0x4b;
        uStack_2c = 8;
        (**(code **)(*param_1 + 0xc))(param_1,&uStack_30);
      }
      if (*piVar2 == 0) {
        for (iVar1 = param_1[0x13] + 0x3f0; *(int *)(iVar1 + 4) != 0; iVar1 = *(int *)(iVar1 + 4)) {
        }
        *(int **)(iVar1 + 4) = piVar2;
        *piVar2 = iVar1;
        param_1[0xf] = 0;
        fn_8252AE68(param_1,1);
        param_1[0x22b] = 0;
        param_1[0x263] = 0;
      }
    }
  }
  return;
}

