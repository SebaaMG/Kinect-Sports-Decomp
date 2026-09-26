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
extern unsigned int *auStack_2c;
extern int fn_82E85268();
extern int fn_82F02410();
extern unsigned int uStack_30;


void fn_82E86AF0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  uint uStack_30;
  undefined4 auStack_2c [11];
  
  iVar1 = *(int *)(param_1 + 0xaf0);
  uVar2 = *(undefined4 *)(param_1 + 0x84c);
  uVar4 = (-(ulonglong)*(uint *)(param_1 + 0x848) & ~(ulonglong)*(uint *)(param_1 + 0x848) &
          0xffffffff) >> 0x1e & 2;
  *(int *)(param_1 + 0x84c) = *(int *)(param_1 + 0x1ea0);
  iVar3 = (int)(((uVar4 | *(uint *)(param_1 + 0x654)) +
                 (uVar4 | (ulonglong)*(uint *)(param_1 + 0x654) & 0x3fffffff) * 4 & 0x3fffffff) << 2
               );
  if ((0 < *(int *)(param_1 + 0x1ea0)) && (iVar1 == 2)) {
    *(undefined4 *)(param_1 + 0xaf0) = 2;
  }
  if (*(int *)(param_1 + 0xaf0) == 0) {
    iVar5 = 0;
  }
  else if (*(int *)(param_1 + 0xaf0) == 1) {
    if (*(int *)(param_1 + 0x828) == -1) {
      iVar5 = 1;
    }
    else {
      iVar5 = 3;
    }
  }
  else {
    iVar5 = 2;
  }
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),
                    *(undefined4 *)(iVar5 * 4 + iVar3 + -0x7ce77540),
                    *(undefined4 *)(iVar5 * 4 + iVar3 + -0x7ce774f0));
  if ((0 < *(int *)(param_1 + 0x84c)) &&
     ((*(int *)(param_1 + 0xaf0) == 2 || (*(int *)(param_1 + 0xaf0) == 4)))) {
    if (iVar1 != 4) {
      uStack_30 = 0;
      auStack_2c[0] = 0;
      fn_82E85268(param_1,&uStack_30,auStack_2c,*(undefined4 *)(param_1 + 0x1acc));
      fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),uStack_30 & 0x7f,auStack_2c[0]);
      *(undefined4 *)(param_1 + 0x84c) = uVar2;
      return;
    }
    fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),0x7f,7);
    *(undefined4 *)(param_1 + 0xaf0) = 4;
  }
  *(undefined4 *)(param_1 + 0x84c) = uVar2;
  return;
}

