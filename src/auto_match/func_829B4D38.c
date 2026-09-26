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
extern int fn_82930318();
extern int fn_829304E0();
extern int fn_82932F78();
extern int fn_82980C18();
extern int fn_829B4AD0();


int fn_829B4D38(undefined8 param_1,int *param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int aiStack_40 [16];
  
  if (*(int *)(*param_2 + 4) == 3) {
    uVar1 = fn_82930318(0x14);
    if ((uVar1 & 0xffffffff) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = fn_829304E0(uVar1,0,0,0xffffffff8204e244);
    }
    if (iVar2 != 0) {
      iVar3 = fn_82930318(0x18);
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = fn_82932F78();
      }
      if ((iVar3 != 0) &&
         (iVar4 = fn_829B4AD0(param_1,*param_2,param_2[1],1,1,aiStack_40), -1 < iVar4)) {
        *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(aiStack_40[0] + 4);
        *(int *)(iVar3 + 0x14) = param_2[1];
        *(int *)(iVar2 + 8) = iVar3;
        param_2[1] = 0;
        *param_2 = 0;
        return iVar2;
      }
    }
  }
  else {
    fn_82980C18(param_1,0,3000,0xffffffff82054480);
  }
  return 0;
}

