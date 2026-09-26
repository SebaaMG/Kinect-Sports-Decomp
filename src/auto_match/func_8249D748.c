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
extern int fn_8249ABC0();
extern int fn_825200A8();
extern unsigned int lbl_832765BC;


uint fn_8249D748(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = fn_8249ABC0();
  iVar1 = *(int *)(iVar1 + 0x70);
  if ((iVar1 != 0) && (*(int *)(*(int *)(iVar1 + 0x844) + 0x358) == 0)) {
    iVar2 = fn_825200A8(0xffffffff8326597c);
    if (iVar2 != 0) {
LAB_8249d794:
      uVar4 = 1;
      goto LAB_8249d820;
    }
    uVar4 = *(uint *)(iVar1 + 0xd54);
    if ((ulonglong)uVar4 != 0xfffffffffffffff0) {
      if (*(int *)(uVar4 + 0x18) == 0) {
        iVar1 = *(int *)(uVar4 + 0x14);
        if (iVar1 != 0) {
          uVar3 = (uint)(*(int *)(iVar1 + 8) == 9);
          if (*(int *)(iVar1 + 0x2c) != 0) {
            uVar3 = (uint)LZCOUNT(*(undefined4 *)(*(int *)(iVar1 + 0x2c) + 0x2c)) >> 5 & uVar3;
          }
          if (uVar3 != 0) goto LAB_8249d794;
        }
        if (*(int *)(uVar4 + 0x14) != 0) goto LAB_8249d81c;
      }
      uVar4 = 1;
      if (lbl_832765BC != 0) goto LAB_8249d820;
    }
  }
LAB_8249d81c:
  uVar4 = 0;
LAB_8249d820:
  if (*param_1 != param_1[1]) {
    uVar4 = *(uint *)(param_1[1] + -8);
  }
  fn_8249ABC0();
  return (uint)(param_1[0xd] == 0) & uVar4 & 1;
}

