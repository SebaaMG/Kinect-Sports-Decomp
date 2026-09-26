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
extern int fn_829E7DA0();
extern int fn_82A28568();
extern unsigned int lbl_832179FC;


undefined8 fn_829E7DF0(int *param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar3 = ((longlong)param_2 * (longlong)param_3 & 0x1fffffffU) * 8;
  if (uVar3 < 0xa0001) {
    if ((uint)param_1[2] < uVar3) {
      if ((param_1[4] != 0) && (param_1[2] != 0)) {
        fn_829E7DA0(param_1);
      }
      iVar2 = fn_82A28568(*(undefined4 *)(lbl_832179FC + 0x8f4cc),0,uVar3 + 0x1f);
      param_1[4] = iVar2;
      if (iVar2 == 0) goto LAB_829e7e1c;
      param_1[2] = (int)uVar3;
      *param_1 = param_2;
      param_1[1] = param_3;
      param_1[3] = iVar2 + 0x1fU & 0xffffffe0;
    }
    uVar1 = 1;
  }
  else {
LAB_829e7e1c:
    uVar1 = 0;
  }
  return uVar1;
}

