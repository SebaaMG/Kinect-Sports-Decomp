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
extern unsigned int *auStack_100;
extern unsigned int *auStack_120;
extern unsigned int *auStack_d0;
extern int fn_82ABE0E8();
extern int fn_82F65390();
extern int fn_82F68CC0();


bool fn_82ABF228(int param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_120 [32];
  undefined1 auStack_100 [48];
  undefined1 auStack_d0 [208];
  
  fn_82F68CC0(auStack_d0,0xffffffff820d7990,0x9d);
  fn_82F68CC0(auStack_100,0xffffffff820d7964,0x26);
  iVar5 = fn_82F65390(param_2,auStack_d0,0x9c);
  if ((iVar5 == 0) || (iVar5 = fn_82F65390(param_2,auStack_100,0x25), iVar5 == 0)) {
    for (uVar1 = *(uint *)(param_1 + 4); ((uVar1 & 1) == 0 && (uVar1 != 0));
        uVar1 = *(uint *)((uVar1 & 0xfffffffe) + 4)) {
      if ((*(uint *)(uVar1 + 0x1c) & 1) == 0) {
        uVar2 = *(uint *)(uVar1 + 0x18);
        do {
          uVar2 = uVar2 & 0xfffffffe;
          if (uVar2 - 0x28 == 0) break;
          uVar4 = *(uint *)(uVar2 - 0x20) >> 7 & 0x7f;
          if (((((uVar4 == 0x56) || (uVar4 == 0x57)) || (uVar4 == 0x59)) ||
              ((uVar4 == 0x5a || (uVar4 == 0x54)))) || (bVar3 = false, uVar4 == 0x55)) {
            bVar3 = true;
          }
          if ((bVar3) && ((iVar5 = fn_82ABE0E8(uVar2 - 0x28,param_1), iVar5 == 8 || (iVar5 == 9)))
             ) {
            return true;
          }
          uVar2 = *(uint *)(uVar2 - 4);
        } while ((uVar2 & 1) == 0);
      }
    }
  }
  fn_82F68CC0(auStack_120,0xffffffff820d7950,0x14);
  iVar5 = fn_82F65390(param_2,auStack_120,0x13);
  return iVar5 == 0;
}

