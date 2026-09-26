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
extern int fn_82A1F2F8();
extern int fn_82A98F18();
extern int fn_82E23670();
extern int fn_82E25318();
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern U64 storeWordConditionalIndexed();


undefined8 fn_82E23A10(longlong param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char in_RESERVE;
  byte in_cr0;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint uStack_38;
  uint uStack_34;
  
  uVar5 = 0;
  RtlEnterCriticalSection(param_1 + 0xa0);
  puVar2 = (uint *)param_1;
  *(char *)(puVar2 + 0x27) = '\x01' - *(char *)(puVar2 + 0x27);
  RtlLeaveCriticalSection(param_1 + 0xa0);
  if (puVar2[(uint)*(byte *)(puVar2 + 0x27) * 4 + 0x1d] == 0) {
    uVar5 = 0x15;
  }
  else {
    uVar3 = fn_82A1F2F8();
    puVar2[0x2f] = uVar3;
    uStack_34 = puVar2[4];
    uStack_38 = puVar2[3];
    uVar3 = puVar2[*(byte *)(puVar2 + 0x27) + 0x25];
    uStack_40 = 0;
    uStack_3c = 0;
    fn_82A98F18(*(undefined4 *)(puVar2[(uint)*(byte *)(puVar2 + 0x27) * 4 + 0x1d] + 8),
                    uStack_38 << 2,0,
                    *(undefined4 *)(puVar2[(uint)*(byte *)(puVar2 + 0x27) * 4 + 0x1d] + 8),uStack_38
                    ,uStack_34,&uStack_40,4);
    if ((param_2 != 0) || (uVar4 = 0, puVar2[(*(byte *)(puVar2 + 0x27) + 8) * 4] != 0)) {
      uVar4 = 1;
    }
    uVar1 = puVar2[3];
    uVar4 = fn_82E25318(puVar2[0x30],
                            *(undefined4 *)(puVar2[(uint)*(byte *)(puVar2 + 0x27) * 4 + 0x1d] + 8),
                            ((longlong)(int)puVar2[4] * (longlong)(int)uVar1 & 0x3fffffffU) << 2,
                            uVar1 << 2,uVar1,puVar2[4],uVar4,uVar3 * 10000);
    fn_82E23670((ulonglong)*(byte *)(puVar2 + 0x27) * 0x10 + param_1 + 0x74,uVar4,uVar4,puVar2[7])
    ;
    do {
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed((ulonglong)*puVar2 + 1,0,param_1);
        *puVar2 = uVar3;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
  }
  return uVar5;
}

