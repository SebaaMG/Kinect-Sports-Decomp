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
extern int fn_82FECF60();
extern int fn_82FF5750();
extern int fn_83000878();
extern int fn_8301B970();
extern unsigned int lbl_832642F4;
extern unsigned int lbl_832642F8;


undefined8 fn_82FEFF98(int param_1,int param_2,char param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  RtlEnterCriticalSection(0xffffffff83264558);
  if ((*(byte *)(param_1 + 0xd5) & 2) == 0) {
    *(byte *)(param_1 + 0xd5) = *(byte *)(param_1 + 0xd5) | 2;
    if (param_3 == '\0') {
      fn_82FECF60(param_1 + -4);
    }
    if ((param_2 == 0) || (param_2 == 2)) {
      if (*(int *)(param_1 + 0x54) != 0) {
        iVar2 = param_1 + 8;
        if (param_1 == 4) {
          iVar2 = 0;
        }
        fn_82FF5750(lbl_832642F4,*(int *)(param_1 + 0x54),iVar2);
        *(undefined4 *)(param_1 + 0x54) = 0;
      }
      if (*(int *)(param_1 + 0x58) != 0) {
        iVar2 = param_1 + 8;
        if (param_1 == 4) {
          iVar2 = 0;
        }
        fn_82FF5750(lbl_832642F4,*(int *)(param_1 + 0x58),iVar2);
        *(undefined4 *)(param_1 + 0x58) = 0;
      }
      if (*(int *)(param_1 + 0x178) != 0) {
        if ((*(uint *)(*(int *)(param_1 + 0x178) + 0x1c) >> 1 & 1) != 0) {
          puVar1 = (undefined4 *)fn_83000878(*(undefined4 *)(param_1 + 100));
          puVar1[1] = 0;
          *puVar1 = 0;
        }
        fn_8301B970(lbl_832642F8,*(undefined4 *)(param_1 + 0x178),param_1 + -4);
        *(undefined4 *)(param_1 + 0x178) = 0;
        *(undefined4 *)(param_1 + 0x17c) = 0;
      }
      *(byte *)(param_1 + 0xd5) = *(byte *)(param_1 + 0xd5) & 0xd7 | 8;
    }
  }
  RtlLeaveCriticalSection(0xffffffff83264558);
  return 1;
}

