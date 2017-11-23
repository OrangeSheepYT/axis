    @commands.command(pass_context=True, no_pm=True)
    async def creditcard(self, ctx):
        msg = '|------------------------------------------------|\n|                                     Axis Credit Card :credit_card:\nName: {}\nBank balance: {}\nCasino balance: {}\n|------------------------------------------------|'.format(user.mention, self.bank.get_balance(user), self.casino.get_balance)
        await self.bot.say(msg)
