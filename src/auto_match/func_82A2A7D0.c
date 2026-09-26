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
extern int fn_82A2A370();
extern int fn_82A36078();
extern int fn_82A362D0();
extern int fn_82F691F0();


undefined8 fn_82A2A7D0(int *param_1)

{
  longlong lVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  int aiStack_40 [2];
  longlong lStack_38;
  longlong lStack_30;
  longlong alStack_28 [2];
  
  uVar4 = 0;
  iVar2 = fn_82A362D0(param_1,aiStack_40);
  if (iVar2 == 0) {
    if (aiStack_40[0] == 0) {
      param_1[0x15] = 0;
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(param_1 + 0x11,0,0x10);
    }
    KeQuerySystemTime(&lStack_38);
    if ((((*(short *)((int)param_1 + 0x46) != 0) && (*(short *)((int)param_1 + 0x9a) != 0)) &&
        (cVar3 = fn_82A36078(param_1 + 0x11,alStack_28,&lStack_38,1), cVar3 != '\0')) &&
       (cVar3 = fn_82A36078(param_1 + 0x26,&lStack_30,&lStack_38,1), cVar3 != '\0')) {
      lVar1 = (longlong)(*param_1 * 0x3c) * 10000000;
      alStack_28[0] = (longlong)(param_1[0x2a] * 0x3c) * 10000000 + lVar1 + alStack_28[0];
      lStack_30 = (longlong)(param_1[0x15] * 0x3c) * 10000000 + lVar1 + lStack_30;
      if (lStack_30 < alStack_28[0]) {
        if ((lStack_38 < lStack_30) || (alStack_28[0] <= lStack_38)) {
          return 1;
        }
      }
      else if ((alStack_28[0] <= lStack_38) && (lStack_38 < lStack_30)) {
        return 1;
      }
      uVar4 = 2;
    }
  }
  else {
    fn_82A2A370();
    uVar4 = 0xffffffffffffffff;
  }
  return uVar4;
}

