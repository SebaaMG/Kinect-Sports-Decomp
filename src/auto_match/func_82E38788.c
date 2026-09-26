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
extern int fn_82E34A88();
extern unsigned int lbl_82002C40;
extern unsigned int lbl_82005758;
extern unsigned int lbl_82015408;


int fn_82E38788(short *param_1,int param_2,int param_3)

{
  ushort uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  
  lVar4 = (((longlong)
            (int)((uint)(ushort)param_1[7] * (uint)(ushort)param_1[1] * *(int *)(param_1 + 0xe)) *
            (longlong)*(int *)(param_1 + 0x10) & 0xffffffffU) >> 3) + 1;
  if (*param_1 == 0x161) {
    if (param_2 == 0) {
      uVar1 = param_1[6];
      uVar2 = fn_82E34A88(param_1);
      uVar5 = ((uVar2 & 0xffffffff) >> 3) + (longlong)(int)(uint)uVar1 * (longlong)param_3 +
              (ulonglong)(uVar1 >> 1);
    }
    else {
      uVar5 = (longlong)(int)((uint)(ushort)param_1[6] * *(int *)(param_1 + 0x10)) *
              (longlong)param_3;
    }
  }
  else {
    uVar2 = (ulonglong)(ushort)param_1[6];
    uVar6 = (uint)(ushort)param_1[6];
    if ((param_1[10] & 1U) == 0) {
      uVar5 = (longlong)
              (int)((((double)(longlong)(int)lVar4 * lbl_82015408 + (double)uVar2 * lbl_82002C40) -
                    lbl_82005758) / (double)uVar2) * (longlong)(int)uVar6;
    }
    else {
      trapWord(6,uVar2,0);
      uVar3 = (uVar2 + lVar4) * 2 - 1;
      uVar5 = (longlong)((int)uVar3 / (int)uVar6) * (longlong)(int)uVar6;
      trapWord(5,uVar2 & ~(((uVar3 & 0x7fffffff) << 1 | (uVar3 & 0xffffffff) >> 0x1f) - 1),0xffff);
    }
  }
  uVar1 = param_1[6];
  trapWord(6,(ulonglong)uVar1,0);
  trapWord(5,(ulonglong)uVar1 & ~(((uVar5 & 0x7fffffff) << 1 | (uVar5 & 0xffffffff) >> 0x1f) - 1),
           0xffff);
  return (int)uVar5 / (int)(uint)uVar1;
}

