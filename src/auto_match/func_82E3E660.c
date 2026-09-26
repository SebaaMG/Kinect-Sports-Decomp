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
extern int fn_82E3C690();
extern unsigned int iStack_2c;
extern unsigned int iStack_30;


undefined8 fn_82E3E660(int *param_1,int *param_2)

{
  ushort uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  int iStack_30;
  int iStack_2c;
  
  if ((*param_1 != 0) && (puVar2 = (uint *)*param_2, puVar2 != (uint *)0x0)) {
    uVar1 = *(ushort *)(puVar2 + 4);
    uVar3 = *puVar2;
    uVar5 = *(undefined8 *)param_2;
    uVar4 = (uint)param_1[1] >> 1;
    trapWord(6,(ulonglong)uVar4,0);
    fn_82E3C690();
    iStack_2c = (int)uVar5;
    if (param_2[1] != 0) {
      param_2[1] = iStack_2c;
    }
    iStack_30 = (int)((ulonglong)uVar5 >> 0x20);
    if (iStack_2c == 0) {
      *(undefined4 *)
       ((int)((((ulonglong)uVar1 ^ (ulonglong)uVar3) -
               (longlong)(int)(((ulonglong)uVar1 ^ (ulonglong)uVar3) / (ulonglong)uVar4) *
               (longlong)(int)uVar4 & 0xffffffff) << 2) + *param_1) =
           *(undefined4 *)(iStack_30 + 0x18);
    }
    else {
      *(undefined4 *)(iStack_2c + 0x18) = *(undefined4 *)(iStack_30 + 0x18);
    }
    param_1[2] = param_1[2] + -1;
    *(int *)(iStack_30 + 0x18) = param_1[4];
    param_1[4] = iStack_30;
    return 1;
  }
  return 0;
}

