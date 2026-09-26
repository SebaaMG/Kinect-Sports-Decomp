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
extern int fn_82520780();
extern int fn_82563230();
extern int fn_82569980();
extern int fn_82599B18();
extern int fn_825BC4F8();
extern int fn_826244E0();
extern int iRam832748f0;
extern unsigned int lbl_821954E8;
extern unsigned int uRam832748ec;
extern unsigned int uRam832748f4;


void fn_8260FB50(int param_1,undefined8 param_2,int param_3,undefined8 param_4,int param_5)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  int *piVar6;
  bool bVar7;
  
  if ((param_5 == 0) &&
     (iVar3 = fn_82520780((double)*(float *)(param_3 + 0x24),0xffffffff83265a28), iVar3 != 0)) {
    iVar3 = fn_82569980(param_1,*(undefined1 *)(param_3 + 0x10));
    if (iVar3 == -1) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(*(int *)(param_1 + 0xd8) + iVar3 * 0x30 + 0x10);
    }
    if (iVar3 != 0) {
      uRam832748f4 = *(undefined2 *)(param_3 + 0x18);
      uVar1 = **(uint **)(param_1 + 0x60);
      uRam832748ec = 1;
      iRam832748f0 = iVar3;
      puVar4 = (uint *)fn_825BC4F8(iVar3,0xffffffff832748ec);
      puVar4[0xb] = (uint)(*(float *)(iVar3 + 0xa8) * *(float *)(param_3 + 0x20));
      *puVar4 = *puVar4 | 0x40;
      iVar5 = fn_82599B18((ulonglong)uVar1 + 0x7fc,param_3 + 0x14,puVar4);
      if (iVar5 != -1) {
        fVar2 = lbl_821954E8;
        if (*(int *)(param_3 + 0x1c) != 0) {
          fVar2 = *(float *)(param_3 + 8) - *(float *)(param_3 + 4);
        }
        fn_826244E0((double)fVar2,(ulonglong)uVar1);
      }
      piVar6 = (int *)(param_3 + 0x2c);
      if (piVar6 == (int *)0x0) {
        bVar7 = false;
      }
      else {
        bVar7 = *piVar6 != 0;
      }
      if (bVar7) {
        fn_82563230(iVar3,*(undefined4 *)(param_3 + 0x28),piVar6,0,0);
      }
    }
  }
  return;
}

