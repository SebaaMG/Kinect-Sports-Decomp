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
extern unsigned int fStack_58;
extern unsigned int fStack_5c;
extern unsigned int fStack_60;
extern unsigned int fStack_68;
extern unsigned int fStack_6c;
extern unsigned int fStack_70;
extern int fn_8280AD30();
extern int fn_82810360();


ulonglong fn_8285AD58(int param_1,int param_2,float *param_3)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float afStack_50 [20];
  
  param_2 = *(int *)(param_1 + 100) + param_2;
  uVar2 = 0;
  if (*(int *)(param_2 + 0x94) != 0) {
    fn_8280AD30(param_2 + 0x10,param_3,afStack_50);
    param_3 = afStack_50;
  }
  iVar3 = 0;
  if (*(short *)(param_1 + 0x44) != 0) {
    iVar4 = 0;
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0x40) + iVar4);
      if (*piVar1 != -1) {
        fn_82810360(piVar1 + 1,&fStack_70);
        fn_82810360(piVar1 + 4,&fStack_60);
        if (((((fStack_70 <= *param_3) && (*param_3 <= fStack_60)) && (fStack_6c <= param_3[1])) &&
            ((param_3[1] <= fStack_5c && (fStack_68 <= param_3[2])))) && (param_3[2] <= fStack_58))
        {
          uVar2 = uVar2 + 1;
        }
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar3 < (int)(uint)*(ushort *)(param_1 + 0x44));
  }
  if ((*(int *)(param_2 + 0x90) != 0) && ((uVar2 & 0xffffffff) == 0)) {
    uVar2 = 1;
  }
  return uVar2;
}

