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
extern int fn_82C06948();
extern int fn_82C10A28();
extern int fn_82C10B28();
extern int fn_82C10B70();
extern int fn_82C12A00();


undefined8 fn_82C07AA8(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int aiStack_20 [2];
  
  if ((param_1 != (int *)0x0) && (iVar1 = *param_1, iVar1 != 0)) {
    aiStack_20[0] = *(int *)(iVar1 + 0x224);
    fn_82C10A28(*(undefined4 *)(iVar1 + 0x260));
    uVar2 = *(undefined4 *)(iVar1 + 0x260);
    fn_82C06948(iVar1);
    if (aiStack_20[0] != 0) {
      fn_82C12A00();
      fn_82C10B28(uVar2,8,aiStack_20);
    }
    *param_1 = 0;
    fn_82C10B70(uVar2);
    return 0;
  }
  return 4;
}

